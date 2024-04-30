import { Component } from '@angular/core';
import $ from 'jquery';
@Component({
  selector: 'app-voting-result',
  templateUrl: './voting-result.component.html',
  styleUrl: './voting-result.component.css'
})
export class VotingResultComponent {
  ngOnInit(){
    $(document).ready(()=>{
      $("#sidebar-toggle").click(()=>{
        $("#sidebar").toggleClass("collapsed");
      });
    })
  }
}
