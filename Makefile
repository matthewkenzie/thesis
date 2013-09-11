.PHONY: clean

EXTRASTYS = abhepexpt.sty abhep.sty  abmath.sty lineno.sty SIunits.sty varwidth.sty

thesis.pdf: thesis.tex mythesis.cls ch1_intro_theory/ch1_intro_theory.tex ch2_cms_exp/ch2_cms_exp.tex ch3_comm_anal_comps/ch3_comm_anal_comps.tex ch4_selec_and_cats/ch4_selec_and_cats.tex ch5_anal_and_results/ch5_anal_and_results.tex ch6_spin_anal/ch6_spin_anal.tex ch7_concs/ch7_concs.tex frontmatter.tex appendices.tex
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
