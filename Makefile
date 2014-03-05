.PHONY: clean

EXTRASTYS = abhepexpt.sty abhep.sty  abmath.sty lineno.sty SIunits.sty varwidth.sty

thesis.pdf: thesis.tex mythesis.bib mythesis.cls mythesis.sty intro/intro.tex theory/theory.tex cms_experiment/cms_experiment.tex analysis_comps/analysis_comps.tex selec_and_cats/selec_and_cats.tex analysis/analysis.tex results/results.tex spin/spin.tex conclusions/conclusions.tex frontmatter.tex backmatter.tex appendices.tex
	@rm -f $(EXTRASTYS)
	unzip extrastyles.zip
	@rm -f thesis.{aux,toc,lof,lot}
	(pdflatex thesis && bibtex thesis && pdflatex thesis && pdflatex thesis) || rm -f $(EXTRASTYS) thesis.pdf
	@rm -f thesis.{aux,toc,lof,lot}
	@rm -f $(EXTRASTYS)

clean:
	@rm -f $(EXTRASTYS)
	@rm -f thesis.pdf thesis.log thesis.aux
	@rm -f *.bbl *.blg *.lof *.cut
	@rm -f *.lot *.out *.toc
